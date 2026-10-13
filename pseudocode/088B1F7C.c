/* Entry 0x088B1F7C | file offset 0x000AEF54 | FUN_088b1f7c | bytes 196 */

undefined4 FUN_088b1f7c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_50;
  undefined1 auStack_4c [52];
  
  local_50 = 0;
  if (((*(short *)(param_4 + *(char *)(param_4 + 0x773) * 0xc6 + 0xb2 + *(int *)(param_1 + 4) * 2)
        != -1) && (iVar1 = FUN_088b29d8(), iVar1 != 0)) &&
     ((int)*(char *)(iVar1 + 0x12) == *(int *)(param_1 + 8))) {
    FUN_088c005c(auStack_4c,(int)*(short *)(iVar1 + 6));
    FUN_088bd6d0(param_2,param_3,&local_50,auStack_4c);
  }
  return local_50;
}

