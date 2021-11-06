CREATE TABLE `sensordata` (
  `id` INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
  `temperature` DOUBLE NOT NULL,
  `humidity` DOUBLE NOT NULL,
  `datetime` TIMESTAMP NOT NULL DEFAULT (CURRENT_TIMESTAMP)
);
