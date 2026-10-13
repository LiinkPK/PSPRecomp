/* Entry 0x088A4EE8 | file offset 0x000A1EC0 | FUN_088a4ee8 | bytes 96 */

void FUN_088a4ee8(undefined4 param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x18) & 4) != 0) {
    FUN_088a44f8(param_2,0);
  }
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffffffe;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  return;
}

