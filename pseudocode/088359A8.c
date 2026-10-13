/* Entry 0x088359A8 | file offset 0x00032980 | FUN_088359a8 | bytes 252 */

void FUN_088359a8(int param_1,undefined4 param_2,char param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [4];
  float local_2c;
  
  FUN_089a38fc(auStack_30,param_2,param_1 + 0x80);
  FUN_089a38c4(param_1 + 0x100,param_1 + 0x100,auStack_30);
  if ((*(int *)(param_1 + 0x3a4) != 0) && ((*(uint *)(*(int *)(param_1 + 0x3a4) + 4) & 1) != 0)) {
    pfVar1 = (float *)(*(int *)(param_1 + 0x314) + 0x18);
    *pfVar1 = *pfVar1 + local_2c;
  }
  if (param_3 == '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x38c);
  }
  else if (*(int *)(param_1 + 0x398) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x38c);
  }
  else {
    FUN_0880cd90();
    uVar2 = *(undefined4 *)(param_1 + 0x38c);
  }
  *(undefined4 *)(param_1 + 0x38c) = uVar2;
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x8000000;
  FUN_089a3868(param_1 + 0x80,param_2);
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  return;
}

