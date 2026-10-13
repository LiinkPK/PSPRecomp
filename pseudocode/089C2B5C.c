/* Entry 0x089C2B5C | file offset 0x001BFB34 | FUN_089c2b5c | bytes 140 */

void FUN_089c2b5c(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 4) == -1) {
    FUN_089a03dc(9);
  }
  else {
    FUN_089a0384(9);
    FUN_08973508(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2,
                 *(undefined4 *)(param_3 + 4));
    FUN_08973334(param_2,*(undefined4 *)(param_3 + 4),5,1,0,0);
  }
  return;
}

