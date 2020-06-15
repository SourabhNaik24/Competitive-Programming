select distinct city from station where mod(station.id,2) = 0
order by city;