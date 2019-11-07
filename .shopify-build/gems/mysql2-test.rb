require 'mysql2'
client = Mysql2::Client.new(:host => "mysql", :username => "root")
client.query("CREATE DATABASE test")
client.query("USE test")
client.query("CREATE TABLE animals(name TEXT, legs INT)")
client.query("INSERT INTO animals(name, legs) VALUES ('cat', 4)")
client.query("INSERT INTO animals(name, legs) VALUES ('dog', 4)")
client.query("INSERT INTO animals(name, legs) VALUES ('spider', 8)")
raise unless client.query("SELECT count(*) FROM animals WHERE legs = 4").first['count(*)'] == 2
raise unless client.query("SELECT avg(legs) FROM animals").first['avg(legs)'] - 5.3333 < 0.001
