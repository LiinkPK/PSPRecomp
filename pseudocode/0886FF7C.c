/* Entry 0x0886FF7C | file offset 0x0006CF54 | FUN_0886ff7c | bytes 84 */

undefined4 FUN_0886ff7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = scesupPreAcc_NID_B03FF882
                      (PTR_s_DISSINST_DAT_089d5fa4,param_3,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

