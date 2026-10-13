/* Entry 0x088AEFA0 | file offset 0x000ABF78 | FUN_088aefa0 | bytes 128 */

void FUN_088aefa0(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b34) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b38) = 0;
  FUN_08935828(*(int *)(param_1 + 0xc) + 0xe0c,0,0x40);
  FUN_08935828(*(int *)(param_1 + 0xc) + 0x2a94,0,0x14);
  **(undefined4 **)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b84);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b88);
  return;
}

