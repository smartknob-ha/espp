idf_component_register(
  INCLUDE_DIRS "include"
  SRC_DIRS "src"
  REQUIRES driver esp_lcd base_component codec display display_drivers i2c input_drivers gt911 task tt21100
  )
