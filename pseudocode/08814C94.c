/* Entry 0x08814C94 | file offset 0x00011C6C | FUN_08814c94 | bytes 116 */

void FUN_08814c94(int param_1)

{
  *(uint *)(param_1 + 0x560) = *(uint *)(param_1 + 0x560) & 0xffffff00;
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0;
  FUN_089a3890(param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  *(uint *)(param_1 + 0x378) = *(uint *)(param_1 + 0x378) | 1;
  *(undefined4 *)(param_1 + 0x5f4) = 0;
  return;
}

