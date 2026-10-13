/* Entry 0x088F82FC | file offset 0x000F52D4 | FUN_088f82fc | bytes 344 */

void FUN_088f82fc(int param_1,undefined1 *param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 auStack_2a [9];
  undefined1 local_21;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x31968)) {
    do {
      iVar1 = FUN_088f5e80(param_2 + 0x10,param_1 + iVar2 * 0x1270 + 0x14c80);
      if (iVar1 == 1) {
        FUN_089057bc(&local_30);
        local_30 = *param_2;
        local_2f = param_2[1];
        local_2e = param_2[2];
        local_2d = param_2[3];
        local_2c = param_2[4];
        local_2b = param_2[5];
        FUN_08935828(auStack_2a,0,9);
        FUN_08935bb4(auStack_2a,param_3,8);
        iVar1 = **(int **)(param_1 + 0x14c70);
        local_21 = param_4;
        (**(code **)(iVar1 + 0x3c))
                  ((int)*(int **)(param_1 + 0x14c70) + (int)*(short *)(iVar1 + 0x38),iVar2,&local_30
                   ,param_2 + 0x1248);
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x31968));
  }
  return;
}

