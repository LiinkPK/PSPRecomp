/* Entry 0x08823394 | file offset 0x0002036C | FUN_08823394 | bytes 124 */

void FUN_08823394(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x20) & 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x394);
    FUN_0886ca58(uVar1);
    FUN_0886b240(uVar1);
    *(uint *)(*(int *)(param_1 + 0x24) + 0x380) =
         *(uint *)(*(int *)(param_1 + 0x24) + 0x380) & 0xfffffffe;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffff7;
  }
  return;
}

