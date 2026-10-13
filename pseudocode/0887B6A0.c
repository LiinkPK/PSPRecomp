/* Entry 0x0887B6A0 | file offset 0x00078678 | FUN_0887b6a0 | bytes 168 */

void FUN_0887b6a0(int param_1)

{
  FUN_0887b748(param_1,0,0);
  FUN_0887b7d0(0x3f800000,0x3f800000,param_1);
  FUN_0887b7dc(0x3f800000,0x3f800000,param_1);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_0887b924(param_1);
  FUN_0887b970(param_1);
  FUN_0887b9e4(param_1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffff7ff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  FUN_0887bbc8(param_1);
  return;
}

