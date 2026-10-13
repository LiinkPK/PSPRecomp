/* Entry 0x0898E120 | file offset 0x0018B0F8 | FUN_0898e120 | bytes 116 */

void FUN_0898e120(int param_1,int param_2,undefined1 param_3)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    FUN_0898e564(param_1,param_2,param_3);
    uVar1 = *(ushort *)(param_2 + 0x8e);
    *(uint *)(param_1 + 0x50) = (uint)uVar1;
    *(bool *)(param_1 + 0x59) = uVar1 == 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}

