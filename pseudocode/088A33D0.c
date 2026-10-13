/* Entry 0x088A33D0 | file offset 0x000A03A8 | FUN_088a33d0 | bytes 388 */

void FUN_088a33d0(int param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == '\x01') {
    if (param_2 < 1) {
      if (-1 < param_2) {
        if (*(int *)(param_1 + 0x4c) == 0) {
          uVar2 = *(uint *)(param_1 + 0x34);
        }
        else {
          if ((*(uint *)(*(int *)(param_1 + 0x4c) + 8) & 8) != 0) {
            return;
          }
          uVar2 = *(uint *)(param_1 + 0x34);
        }
        if ((uVar2 & 0x40) == 0) {
          return;
        }
        *(uint *)(param_1 + 0x34) = uVar2 | 4;
      }
    }
    else if (param_2 < 2) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        uVar2 = *(uint *)(param_1 + 0x34);
      }
      else {
        if ((*(uint *)(*(int *)(param_1 + 0x4c) + 8) & 0x10) != 0) {
          return;
        }
        uVar2 = *(uint *)(param_1 + 0x34);
      }
      if ((uVar2 & 0x80) == 0) {
        return;
      }
      *(uint *)(param_1 + 0x34) = uVar2 | 8;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x34);
    if (param_2 < 1) {
      if (-1 < param_2) {
        if ((uVar2 & 4) == 0) {
          return;
        }
        uVar2 = uVar2 & 0xfffffffb;
        *(uint *)(param_1 + 0x34) = uVar2;
      }
    }
    else if (param_2 < 2) {
      if ((uVar2 & 8) == 0) {
        return;
      }
      uVar2 = uVar2 & 0xfffffff7;
      *(uint *)(param_1 + 0x34) = uVar2;
    }
    if ((uVar2 & 0xc) != 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    iVar1 = **(int **)(param_1 + 0x50);
    (**(code **)(iVar1 + 0x24))
              ((int)*(int **)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x20),param_3);
  }
  return;
}

