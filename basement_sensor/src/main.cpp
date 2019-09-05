// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace binary_sensor;
logger::Logger *logger_logger;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace sensor;
status::StatusBinarySensor *status_statusbinarysensor;
dht::DHT *dht_dht;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_2;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esphome:
  //   name: basement_sensor
  //   platform: ESP32
  //   board: featheresp32
  //   build_path: basement_sensor
  //   platformio_options: {}
  //   arduino_version: espressif32@1.6.0
  //   includes: []
  //   libraries: []
  App.pre_setup("basement_sensor", __DATE__ ", " __TIME__);
  // binary_sensor:
  // logger:
  //   logs: {}
  //   level: DEBUG
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   hardware_uart: UART0
  //   id: logger_logger
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // wifi:
  //   fast_connect: false
  //   domain: .local
  //   power_save_mode: NONE
  //   reboot_timeout: 5min
  //   id: wifi_wificomponent
  //   networks:
  //   - password: SecureDevices1!
  //     ssid: homesteaddevices
  //     id: wifi_wifiap
  //   use_address: basement_sensor.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("basement_sensor.local");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("homesteaddevices");
  wifi_wifiap.set_password("SecureDevices1!");
  wifi_wificomponent->add_sta(wifi_wifiap);
  wifi_wificomponent->set_reboot_timeout(300000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  App.register_component(wifi_wificomponent);
  // ota:
  //   password: basement_sensor
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 3232
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_auth_password("basement_sensor");
  ota_otacomponent->start_safe_mode();
  App.register_component(ota_otacomponent);
  // api:
  //   password: basement_sensor
  //   reboot_timeout: 5min
  //   id: api_apiserver
  //   port: 6053
  api_apiserver = new api::APIServer();
  App.register_component(api_apiserver);
  // sensor:
  api_apiserver->set_port(6053);
  api_apiserver->set_password("basement_sensor");
  api_apiserver->set_reboot_timeout(300000);
  // binary_sensor.status:
  //   platform: status
  //   name: Basement Sensor Status
  //   id: status_statusbinarysensor
  //   device_class: connectivity
  status_statusbinarysensor = new status::StatusBinarySensor();
  App.register_component(status_statusbinarysensor);
  // sensor.dht:
  //   platform: dht
  //   pin:
  //     mode: INPUT
  //     number: 21
  //     inverted: false
  //   model: DHT22
  //   temperature:
  //     name: Basement Temperature
  //     unit_of_measurement: °C
  //     id: sensor_sensor
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   humidity:
  //     name: Basement Humidity
  //     unit_of_measurement: '%'
  //     id: sensor_sensor_2
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   update_interval: 60s
  //   id: dht_dht
  dht_dht = new dht::DHT();
  dht_dht->set_update_interval(60000);
  App.register_component(dht_dht);
  App.register_binary_sensor(status_statusbinarysensor);
  status_statusbinarysensor->set_name("Basement Sensor Status");
  status_statusbinarysensor->set_device_class("connectivity");
  dht_dht->set_pin(new GPIOPin(21, INPUT, false));
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("Basement Temperature");
  sensor_sensor->set_unit_of_measurement("\302\260C");
  sensor_sensor->set_icon("mdi:thermometer");
  sensor_sensor->set_accuracy_decimals(1);
  dht_dht->set_temperature_sensor(sensor_sensor);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("Basement Humidity");
  sensor_sensor_2->set_unit_of_measurement("%");
  sensor_sensor_2->set_icon("mdi:water-percent");
  sensor_sensor_2->set_accuracy_decimals(0);
  dht_dht->set_humidity_sensor(sensor_sensor_2);
  dht_dht->set_dht_model(dht::DHT_MODEL_DHT22);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
