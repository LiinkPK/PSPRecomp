/* Entry 0x08827508 | file offset 0x000244E0 | FUN_08827508 | bytes 140 */

void FUN_08827508(int param_1)

{
  FUN_0882773c();
  FUN_08831360(param_1);
  *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(*(int *)(param_1 + 0x550) + 0x374);
  if ((*(uint *)(*(int *)(param_1 + 0x550) + 0x388) & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x544) + 0xfc))
              (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0xf8));
  }
  return;
}

