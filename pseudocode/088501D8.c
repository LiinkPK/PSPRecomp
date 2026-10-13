/* Entry 0x088501D8 | file offset 0x0004D1B0 | FUN_088501d8 | bytes 924 */

void FUN_088501d8(int param_1,char param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x12);
  if (uVar1 < 6) {
    if (uVar1 == 1) {
      if (*(char *)(param_1 + 0x18) != '\0') {
        FUN_0884eef4(param_1,0);
      }
      if (*(char *)(param_1 + 0x19) == '\0') {
        if (*(char *)(param_1 + 0x1a) != '\0') {
          FUN_08834d60((float)(int)*(short *)(param_1 + 0x14),*(undefined4 *)(param_1 + 8));
          *(undefined1 *)(param_1 + 0x1a) = 0;
        }
      }
      else {
        FUN_08834d30((float)(int)*(short *)(param_1 + 0x16),0,*(undefined4 *)(param_1 + 8));
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined1 *)(param_1 + 0x1a) = 1;
      }
    }
    else if (uVar1 == 2) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
      if (0 < *(short *)(*(int *)(param_1 + 4) + 0x20)) {
        FUN_0882fa10(0,0,*(int *)(param_1 + 8) + 0x130,(int)*(short *)(*(int *)(param_1 + 4) + 0x20)
                     ,0);
      }
      if (-1 < *(short *)(*(int *)(param_1 + 4) + 0x26)) {
        FUN_088a9de8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x390) + 0x5c),
                     (int)*(short *)(*(int *)(param_1 + 4) + 0x26),*(int *)(param_1 + 8) + 0x4c8,0,0
                    );
      }
      if (*(short *)(param_1 + 0x16) < 1) {
        iVar3 = *(int *)(param_1 + 8);
      }
      else {
        FUN_08834d30((float)(int)*(short *)(param_1 + 0x16),0,*(undefined4 *)(param_1 + 8));
        *(float *)(param_1 + 0xc) = (float)(int)*(short *)(param_1 + 0x16);
        iVar3 = *(int *)(param_1 + 8);
      }
      *(uint *)(iVar3 + 0x38c) = *(uint *)(iVar3 + 0x38c) | 0x4000;
      *(undefined4 *)(iVar3 + 0x388) = *(undefined4 *)(iVar3 + 0x388);
      *(undefined2 *)(param_1 + 0x12) = 3;
    }
    else if (uVar1 == 3) {
      bVar2 = false;
      if (*(short *)(*(int *)(param_1 + 4) + 0x20) < 1) {
        if (*(short *)(param_1 + 0x16) < 1) {
          FUN_08834df4(0,*(undefined4 *)(param_1 + 8));
          bVar2 = true;
        }
        else {
          fVar5 = (float)FUN_08838300(*(undefined4 *)(param_1 + 8));
          fVar5 = *(float *)(param_1 + 0xc) - fVar5;
          *(float *)(param_1 + 0xc) = fVar5;
          if (fVar5 < 0.0) {
            bVar2 = true;
          }
        }
      }
      else if ((*(uint *)(*(int *)(param_1 + 8) + 0x188) & 1) != 0) {
        FUN_08834df4(0,*(undefined4 *)(param_1 + 8));
        bVar2 = true;
      }
      if (bVar2) {
        if ((*(uint *)(*(int *)(param_1 + 8) + 0x380) & 0x80000) == 0) {
          iVar3 = *(int *)(param_1 + 8);
          *(undefined4 *)(iVar3 + 0x38c) = *(undefined4 *)(iVar3 + 0x38c);
          *(uint *)(iVar3 + 0x388) = *(uint *)(iVar3 + 0x388) | 0x800;
          FUN_0883916c(*(undefined4 *)(param_1 + 8));
          iVar3 = *(int *)(param_1 + 8);
        }
        else {
          iVar3 = *(int *)(param_1 + 8);
        }
        bVar2 = true;
        iVar3 = FUN_088aa30c(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x5d4) + 0x390) + 0x5c),
                             iVar3 + 0x4c8);
        if (iVar3 != 0) {
          iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x390) + 0x5c);
          iVar4 = *(int *)(param_1 + 8) + 0x4c8;
          if (iVar3 != 0) {
            FUN_088aa3b0(iVar3,iVar4,2,0);
          }
          iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x5d4) + 0x390) + 0x5c);
          if (iVar3 != 0) {
            FUN_088aa3b0(iVar3,iVar4,2,0);
          }
          bVar2 = false;
        }
        iVar3 = FUN_08839314(*(undefined4 *)(param_1 + 8),1);
        if (iVar3 == 0) {
          bVar2 = false;
        }
        if (bVar2) {
          *(undefined2 *)(param_1 + 0x12) = 4;
        }
      }
    }
    else if (uVar1 == 4) {
      *(undefined2 *)(param_1 + 0x12) = 5;
    }
    else {
      if (uVar1 != 5) {
        return;
      }
      FUN_0884ef7c(param_1);
    }
  }
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x1d) == '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1d) = 0;
    }
  }
  return;
}

