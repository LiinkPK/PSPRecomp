/* Entry 0x0892397C | file offset 0x00120954 | FUN_0892397c | bytes 184 */

void FUN_0892397c(int param_1,undefined2 param_2)

{
  short sVar1;
  
  *(undefined2 *)(param_1 + 2) = param_2;
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 < 2) {
    if (-1 < sVar1) {
      if (sVar1 < 1) {
        FUN_08924ce4(param_1,0,0);
      }
      else {
        FUN_08924ce4(param_1,1,0);
      }
    }
  }
  else if (sVar1 < 3) {
    if (*(short *)(param_1 + 4) == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xd0) = 3;
    }
    else {
      FUN_08924ce4(param_1,3,0);
    }
  }
  else if (sVar1 < 4) {
    FUN_08924ce4(param_1,4,0);
  }
  return;
}

