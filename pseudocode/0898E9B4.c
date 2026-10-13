/* Entry 0x0898E9B4 | file offset 0x0018B98C | FUN_0898e9b4 | bytes 96 */

void FUN_0898e9b4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0898ebfc();
  if (iVar1 != 0) {
    FUN_0898ea14(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_1,param_2,
                 (int)*(short *)(param_1 + 0x10),iVar1);
  }
  return;
}

