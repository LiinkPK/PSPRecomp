/* Entry 0x088823C4 | file offset 0x0007F39C | FUN_088823c4 | bytes 152 */

int FUN_088823c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0885c6cc(*param_1,0x4c,0,0,1,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_088822bc(iVar1,param_1,param_2,param_3,param_4);
    iVar2 = iVar1;
  }
  FUN_08882790(param_1,iVar2);
  return iVar2;
}

