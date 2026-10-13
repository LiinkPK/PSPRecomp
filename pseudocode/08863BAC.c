/* Entry 0x08863BAC | file offset 0x00060B84 | FUN_08863bac | bytes 128 */

void FUN_08863bac(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (param_1 < 0) {
    if (*(code **)(param_2 + 0x34) != (code *)0x0) {
      (**(code **)(param_2 + 0x34))(0,*(undefined4 *)(param_2 + 0x38));
    }
  }
  else {
    *(int *)(param_2 + 0x3c) = param_1;
    (**(code **)(*(int *)(param_2 + 0x154) + 0x94))
              (param_2 + *(short *)(*(int *)(param_2 + 0x154) + 0x90),param_1,FUN_08863c2c,param_2);
  }
  return;
}

