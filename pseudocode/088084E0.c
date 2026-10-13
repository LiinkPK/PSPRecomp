/* Entry 0x088084E0 | file offset 0x000054B8 | FUN_088084e0 | bytes 200 */

void FUN_088084e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*DAT_089d6dd0 != 0) &&
     (iVar1 = FUN_088a9e24(*DAT_089d6dd0,&LAB_088088d0,param_2,0,0,0), iVar1 != 0)) {
    FUN_088a7284(*param_1,param_1[1],param_1[2],iVar1);
    FUN_08828704(iVar1);
  }
  return;
}

