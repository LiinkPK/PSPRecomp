/* Entry 0x08915370 | file offset 0x00112348 | FUN_08915370 | bytes 72 */

void FUN_08915370(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6d0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x544) + 0xfc))
              (iVar1 + *(short *)(*(int *)(iVar1 + 0x544) + 0xf8));
    *(undefined4 *)(param_1 + 0x6d0) = 0;
  }
  return;
}

