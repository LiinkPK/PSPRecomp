/* Entry 0x08833804 | file offset 0x000307DC | FUN_08833804 | bytes 20 */

void FUN_08833804(int param_1)

{
  *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xfffffdff;
  return;
}

