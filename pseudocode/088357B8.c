/* Entry 0x088357B8 | file offset 0x00032790 | FUN_088357b8 | bytes 280 */

void FUN_088357b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [4];
  float local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0x3f800000;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  FUN_089a38fc(auStack_40,&local_30,param_4 + 0x80);
  FUN_089a38c4(param_4 + 0x100,param_4 + 0x100,auStack_40);
  if ((*(int *)(param_4 + 0x3a4) != 0) && ((*(uint *)(*(int *)(param_4 + 0x3a4) + 4) & 1) != 0)) {
    pfVar1 = (float *)(*(int *)(param_4 + 0x314) + 0x18);
    *pfVar1 = *pfVar1 + local_3c;
  }
  if (param_5 == '\0') {
    uVar2 = *(undefined4 *)(param_4 + 0x38c);
  }
  else if (*(int *)(param_4 + 0x398) == 0) {
    uVar2 = *(undefined4 *)(param_4 + 0x38c);
  }
  else {
    FUN_0880cd90();
    uVar2 = *(undefined4 *)(param_4 + 0x38c);
  }
  *(undefined4 *)(param_4 + 0x80) = param_1;
  *(undefined4 *)(param_4 + 0x38c) = uVar2;
  *(uint *)(param_4 + 0x388) = *(uint *)(param_4 + 0x388) | 0x8000000;
  *(undefined4 *)(param_4 + 0x84) = param_2;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  *(undefined4 *)(param_4 + 0x8c) = 0x3f800000;
  return;
}

