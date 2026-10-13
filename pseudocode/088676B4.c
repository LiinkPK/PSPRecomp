/* Entry 0x088676B4 | file offset 0x0006468C | FUN_088676b4 | bytes 100 */

int FUN_088676b4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_08867780(param_1,0x14);
    iVar2 = FUN_0886774c(param_1,param_2);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 1;
      iVar2 = iVar2 + iVar1;
    }
  }
  return iVar2;
}

