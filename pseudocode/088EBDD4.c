/* Entry 0x088EBDD4 | file offset 0x000E8DAC | FUN_088ebdd4 | bytes 232 */

void FUN_088ebdd4(int param_1,int *param_2,char param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(int **)(param_1 + 0x28) = param_2;
  (**(code **)(*param_2 + 0x14))((int)param_2 + (int)*(short *)(*param_2 + 0x10),param_1);
  FUN_08883f64();
  FUN_08883f78();
  FUN_0885cb80(FUN_088ec218,param_1);
  if (param_3 == '\x01') {
    FUN_088eb0fc(0x3f000000,0x3ca3d70a,param_1 + 0x2c,0x5a,0,0x96,0x3c);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x28);
    (**(code **)(iVar1 + 0x24))
              ((int)*(int **)(param_1 + 0x28) + (int)*(short *)(iVar1 + 0x20),param_1);
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  return;
}

