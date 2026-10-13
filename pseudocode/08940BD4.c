/* Entry 0x08940BD4 | file offset 0x0013DBAC | FUN_08940bd4 | bytes 156 */

void FUN_08940bd4(int param_1)

{
  FUN_08940ccc();
  FUN_089a03dc(0x15);
  FUN_089a12a4(0,2,10,0,0xffffffff);
  FUN_089a03dc(1);
  FUN_089a03dc(7);
  FUN_089a03dc(8);
  FUN_089a03dc(9);
  if (*(char *)(param_1 + 0x35) != '\0') {
    FUN_08948ccc(*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_08947100(*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_08941128(param_1);
  FUN_08974a00(*(undefined4 *)(param_1 + 0x18));
  return;
}

