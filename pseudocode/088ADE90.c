/* Entry 0x088ADE90 | file offset 0x000AAE68 | FUN_088ade90 | bytes 152 */

void FUN_088ade90(undefined4 param_1,undefined4 param_2,char *param_3,char param_4)

{
  undefined1 auStack_30 [16];
  
  sceRtcGetCurrentClockLocalTime(auStack_30);
  if (param_4 == '\0') {
    FUN_088adde8(param_1,auStack_30,param_3);
  }
  else if (*param_3 == '\0') {
    FUN_088adde8(param_1,auStack_30,param_3);
  }
  FUN_088adc08(param_1,param_2,param_3);
  return;
}

