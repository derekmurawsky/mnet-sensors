SHELL := /bin/bash
BASECMD=docker run --rm -v ${PWD}:/config -it esphome/esphome
SENSORNAME=garage_controller
PARTIALCOMMAND=$(BASECMD) $(SENSORNAME).yaml

all: build
build: 
		$(PARTIALCOMMAND) compile
test: 
		$(PARTIALCOMMAND) config
clean: 
		$(PARTIALCOMMAND) clean
run:
		$(PARTIALCOMMAND) run
