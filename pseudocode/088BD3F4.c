/* Entry 0x088BD3F4 | file offset 0x000BA3CC | FUN_088bd3f4 | bytes 240 */

undefined4 FUN_088bd3f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined4 local_60;
  undefined1 auStack_5c [52];
  
  local_60 = 0;
  iVar3 = 0;
  psVar2 = (short *)(param_4 + *(char *)(param_4 + 0x773) * 0xc6 + 0xb2);
  do {
    if (((*psVar2 != -1) && (iVar1 = FUN_088b29d8(), iVar1 != 0)) &&
       (*(char *)(iVar1 + 0x12) == '\0')) {
      FUN_088c005c(auStack_5c,(int)*(short *)(iVar1 + 6));
      FUN_088bda8c(param_1,param_2,&local_60,auStack_5c,param_3);
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 1;
  } while (iVar3 < 10);
  return local_60;
}

