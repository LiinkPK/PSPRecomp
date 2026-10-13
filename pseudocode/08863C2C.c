/* Entry 0x08863C2C | file offset 0x00060C04 | FUN_08863c2c | bytes 108 */

void FUN_08863c2c(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0;
  (**(code **)(*(int *)(param_2 + 0x154) + 0xf4))
            (param_2 + *(short *)(*(int *)(param_2 + 0x154) + 0xf0),*(undefined4 *)(param_2 + 0x3c))
  ;
  if (*(code **)(param_2 + 0x34) != (code *)0x0) {
    (**(code **)(param_2 + 0x34))(param_1,*(undefined4 *)(param_2 + 0x38));
  }
  return;
}

