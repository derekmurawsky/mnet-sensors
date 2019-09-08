SHELL := /bin/bash

.PHONY: garage_controller basement_sensor

all: garage_controller basement_sensor

garage_controller:
	$(MAKE) -C $@

basement_sensor:
	$(MAKE) -C $@