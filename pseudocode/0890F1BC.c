/* Entry 0x0890F1BC | file offset 0x0010C194 | FUN_0890f1bc | bytes 168 */

void FUN_0890f1bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088a51c0(param_3,PTR_s_w_system_effe_mpk_089d837c);
  param_1[1] = iVar1;
  uVar2 = FUN_088a5208(iVar1);
  FUN_08935524(uVar2,param_2,param_3);
  iVar1 = FUN_088a54b0(DAT_089d6d78,PTR_s_w_system_effe_mpk_089d837c,uVar2,param_3,0);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    FUN_088a9a80();
  }
  return;
}

