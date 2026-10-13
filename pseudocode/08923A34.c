/* Entry 0x08923A34 | file offset 0x00120A0C | FUN_08923a34 | bytes 120 */

void FUN_08923a34(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0xbc) != 0) {
    func_0x08b34600(*(int *)(iVar1 + 0xbc));
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)(iVar1 + 0xc0) != 0) {
    FUN_088a6c70(*(int *)(iVar1 + 0xc0));
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc0) = 0;
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)(iVar1 + 0xc4) != 0) {
    FUN_088a6c70();
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc4) = 0;
  }
  return;
}

