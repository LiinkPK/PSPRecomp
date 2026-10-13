/* Entry 0x089168EC | file offset 0x001138C4 | FUN_089168ec | bytes 96 */

void FUN_089168ec(int param_1)

{
  if (*(int *)(param_1 + 0x75c) != 0) {
    FUN_0889f340(DAT_089d6c30,0);
    FUN_0889f2b8(DAT_089d6c30);
    FUN_088a51e4(*(undefined4 *)(param_1 + 0x758));
    *(undefined4 *)(param_1 + 0x758) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x75c) = 0;
  }
  return;
}

