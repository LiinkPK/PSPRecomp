/* Entry 0x08925128 | file offset 0x00122100 | FUN_08925128 | bytes 92 */

void FUN_08925128(int param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
                 undefined2 param_5)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xc) = param_2;
  FUN_089a34c0(*(undefined4 *)(param_1 + 4),param_3);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xd) = param_4;
  *(undefined2 *)(*(int *)(param_1 + 4) + 0xe) = param_5;
  return;
}

