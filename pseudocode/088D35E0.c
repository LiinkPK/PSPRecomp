/* Entry 0x088D35E0 | file offset 0x000D05B8 | FUN_088d35e0 | bytes 132 */

int FUN_088d35e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  do {
    iVar1 = FUN_088d3558(param_1,iVar2,param_3);
    if (iVar2 == iVar1) {
      return iVar2;
    }
    iVar2 = iVar1;
  } while (iVar1 != param_2);
  return iVar1;
}

