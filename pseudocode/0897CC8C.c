/* Entry 0x0897CC8C | file offset 0x00179C64 | FUN_0897cc8c | bytes 120 */

void FUN_0897cc8c(undefined4 *param_1,undefined1 (*param_2) [16],int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_3 + 0x90) + 8);
  iVar3 = *(int *)(*(int *)(param_3 + 0x90) + 4);
  auVar1 = vmul_q(*param_2,*(undefined1 (*) [16])
                            (*(int *)(param_3 + 0x8c) + (uint)*(ushort *)(iVar4 + (iVar3 + 2) * 2) +
                            0x60));
  auVar2 = vscl_q(*(undefined1 (*) [16])
                   (*(int *)(param_3 + 0x8c) + (uint)*(ushort *)(iVar4 + iVar3 * 2) + 0x60),
                  0x38000000);
  auVar1 = vmul_q(auVar1,auVar2);
  auVar1 = vsat0_q(auVar1);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  return;
}

