/* Entry 0x088ABAF4 | file offset 0x000A8ACC | FUN_088abaf4 | bytes 256 */

void FUN_088abaf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_60 [70];
  undefined2 local_1a;
  short local_18;
  short local_16;
  
  if (param_4 == 0xffffffff) {
    param_4 = FUN_088aba9c(param_1);
  }
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  else if (35999999 < (int)param_4) {
    param_4 = 35999999;
  }
  local_1a = (undefined2)(param_4 / 0xe10);
  uVar1 = param_4 / 0xe10 & 0xffff;
  param_4 = param_4 + uVar1 * -0xe10;
  uVar2 = param_4 / 0x3c;
  local_18 = (short)uVar2;
  local_16 = (short)param_4 + local_18 * -0x3c;
  FUN_0893476c(auStack_60,&DAT_089cb3d8,uVar1,uVar2 & 0xffff,local_16);
  FUN_0887df14(DAT_089d6998,param_2,param_3,auStack_60);
  return;
}

