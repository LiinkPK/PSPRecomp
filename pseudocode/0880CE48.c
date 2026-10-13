/* Entry 0x0880CE48 | file offset 0x00009E20 | FUN_0880ce48 | bytes 64 */

void FUN_0880ce48(undefined4 param_1,int param_2,int param_3)

{
  if ((param_3 < 0) && (*(char *)(param_2 + 0x3e) <= param_3)) {
    *(undefined4 *)(*(int *)(param_2 + 0x38) + param_3 * 0x18 + 0x14) = param_1;
  }
  return;
}

