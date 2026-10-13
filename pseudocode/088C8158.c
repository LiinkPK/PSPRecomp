/* Entry 0x088C8158 | file offset 0x000C5130 | FUN_088c8158 | bytes 228 */

undefined4 FUN_088c8158(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088c72e0(param_2,param_3);
  if (iVar1 == 0) {
    if (((*(short *)(param_2 + 6) == param_3) && ((*(ushort *)(param_2 + 4) & 2) != 0)) &&
       (iVar1 = FUN_088c0f8c((int)*(short *)(param_2 + 2)), iVar1 != 0)) {
      FUN_088c1520(param_1,iVar1,0,1);
      return 1;
    }
  }
  else {
    iVar2 = FUN_088c0f8c((int)*(short *)(param_2 + 2));
    if (iVar2 != 0) {
      FUN_088c1520(param_1,iVar2,iVar1,0);
      return 1;
    }
  }
  return 0;
}

