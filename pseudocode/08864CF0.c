/* Entry 0x08864CF0 | file offset 0x00061CC8 | FUN_08864cf0 | bytes 28 */

void FUN_08864cf0(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

