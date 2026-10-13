/* Entry 0x088BCE7C | file offset 0x000B9E54 | FUN_088bce7c | bytes 372 */

undefined4
FUN_088bce7c(short param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined1 param_5,
            undefined1 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_130 [64];
  undefined4 local_30;
  int local_2c;
  
  FUN_088bce48((int)param_1,&local_30,&local_2c);
  if (*(char *)(DAT_089d73b0 + 0x15) == '\0') {
    local_2c = (param_3 + -1) / 7 + local_2c + 1;
  }
  else {
    local_2c = local_2c + *(char *)(DAT_089d73b0 + 0x14);
  }
  if (local_2c < 0) {
    local_2c = 0;
  }
  else if (0xf < local_2c) {
    local_2c = 0xf;
  }
  while( true ) {
    if (local_2c < 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_088c1044(auStack_130,0x40,param_2,local_2c,local_30,param_4,param_5,param_6);
    if (0 < iVar1) break;
    local_2c = local_2c + -1;
  }
  iVar2 = *param_7 * 0x343fd + 0x269ec3;
  *param_7 = iVar2;
  return auStack_130[(int)(iVar2 >> 0x10 & 0x7fffU) % iVar1];
}

