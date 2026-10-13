/* Entry 0x088E747C | file offset 0x000E4454 | FUN_088e747c | bytes 1636 */

void FUN_088e747c(int *param_1,undefined2 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  
  switch(*param_2) {
  case 400:
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x109) = 1;
    *(char *)(param_1 + *(int *)(param_2 + 4) * 0x40 + 0x42) = (char)*(int *)(param_2 + 4);
    *(char *)(param_1 + 0x105) = (char)*(undefined4 *)(param_2 + 4);
    if ((float)param_1[0x104] <= 0.0) {
      iVar3 = FUN_08873574(DAT_089d5ec0 + 0x7e0);
      param_1[0x104] = iVar3;
    }
    break;
  case 0x191:
    iVar3 = *(int *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0x105) = 0;
    *(undefined1 *)((int)param_1 + iVar3 * 0x100 + 0x109) = 0;
    iVar3 = 0;
    bVar1 = true;
    do {
      if (*(char *)((int)param_1 + iVar3 * 0x100 + 0x109) != '\0') {
        bVar1 = false;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    if ((bVar1) && ((float)param_1[0x104] <= 0.0)) {
      FUN_0887358c(param_1[0x104],DAT_089d5ec0 + 0x7e0);
    }
    break;
  case 0x192:
    FUN_089a383c(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),0,param_1 + *(int *)(param_2 + 4) * 0x40 + 4);
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10a) = 1;
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10e) = 0;
    break;
  case 0x193:
    FUN_089a383c(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),0,param_1 + *(int *)(param_2 + 4) * 0x40 + 0x10);
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10b) = 1;
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10f) = 0;
    break;
  case 0x194:
    param_1[*(int *)(param_2 + 4) * 0x40 + 0x1c] = *(int *)(param_2 + 6);
    *(undefined1 *)(param_1 + *(int *)(param_2 + 4) * 0x40 + 0x43) = 1;
    break;
  case 0x195:
    param_1[*(int *)(param_2 + 4) * 0x40 + 0x1e] = *(int *)(param_2 + 6);
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10d) = 1;
    break;
  case 0x196:
    FUN_089a383c(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),0,param_1 + *(int *)(param_2 + 4) * 0x40 + 8);
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10e) = 0;
    break;
  case 0x197:
    FUN_089a383c(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),0,param_1 + *(int *)(param_2 + 4) * 0x40 + 0x14);
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10f) = 0;
    break;
  case 0x198:
    param_1[*(int *)(param_2 + 4) * 0x40 + 0x1d] = *(int *)(param_2 + 6);
    break;
  case 0x199:
    param_1[*(int *)(param_2 + 4) * 0x40 + 0x1f] = *(int *)(param_2 + 6);
    break;
  case 0x19a:
    iVar4 = *(int *)(param_2 + 4);
    iVar3 = 0;
    piVar6 = param_1 + iVar4 * 0x40 + 4;
    iVar5 = 0;
    do {
      *(undefined1 *)((int)piVar6 + iVar5 + 0x8c) = 1;
      uVar2 = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((int)piVar6 + iVar5 + 0x88) = 0;
      *(undefined4 *)((int)piVar6 + iVar5 + 0x84) = uVar2;
      iVar3 = iVar3 + 1;
      *(char *)((int)piVar6 + iVar5 + 0x8d) = (char)*(undefined4 *)(param_2 + 8);
      iVar5 = iVar3 * 0x20;
    } while (iVar3 < 4);
    param_1[iVar4 * 0x40 + 0x20] = (int)piVar6;
    param_1[iVar4 * 0x40 + 0x21] = (int)(param_1 + iVar4 * 0x40 + 8);
    param_1[iVar4 * 0x40 + 0x28] = (int)(param_1 + iVar4 * 0x40 + 0x10);
    param_1[iVar4 * 0x40 + 0x29] = (int)(param_1 + iVar4 * 0x40 + 0x14);
    param_1[iVar4 * 0x40 + 0x33] = (int)(param_1 + iVar4 * 0x40 + 0x1c);
    param_1[iVar4 * 0x40 + 0x34] = (int)(param_1 + iVar4 * 0x40 + 0x1d);
    param_1[iVar4 * 0x40 + 0x3b] = (int)(param_1 + iVar4 * 0x40 + 0x1e);
    param_1[iVar4 * 0x40 + 0x3c] = (int)(param_1 + iVar4 * 0x40 + 0x1f);
    break;
  case 0x19b:
    iVar3 = *(int *)(param_2 + 4);
    piVar6 = param_1 + iVar3 * 0x40 + 4;
    if (*(float *)(param_2 + 6) <= 0.0) {
      fVar7 = (float)FUN_089a3c18(param_1 + iVar3 * 0x40 + 8,piVar6);
    }
    else {
      fVar7 = (float)FUN_089a3c18(param_1 + iVar3 * 0x40 + 8,piVar6);
      fVar7 = fVar7 / *(float *)(param_2 + 6);
    }
    *(undefined1 *)(param_1 + iVar3 * 0x40 + 0x27) = 1;
    param_1[iVar3 * 0x40 + 0x25] = (int)fVar7;
    param_1[iVar3 * 0x40 + 0x26] = 0;
    uVar2 = *(undefined4 *)(param_2 + 8);
    param_1[iVar3 * 0x40 + 0x20] = (int)piVar6;
    *(char *)((int)param_1 + iVar3 * 0x100 + 0x9d) = (char)uVar2;
    param_1[iVar3 * 0x40 + 0x21] = (int)(param_1 + iVar3 * 0x40 + 8);
    if (*(char *)((int)param_1 + iVar3 * 0x100 + 0x10e) == '\0') {
      param_1[iVar3 * 0x40 + 0x22] = 0;
    }
    else {
      param_1[iVar3 * 0x40 + 0x22] = (int)(param_1 + iVar3 * 0x40 + 0xc);
    }
    break;
  case 0x19c:
    iVar3 = *(int *)(param_2 + 4);
    if (*(float *)(param_2 + 6) <= 0.0) {
      fVar7 = (float)FUN_089a3c18(param_1 + iVar3 * 0x40 + 0x14,param_1 + iVar3 * 0x40 + 0x10);
    }
    else {
      fVar7 = (float)FUN_089a3c18(param_1 + iVar3 * 0x40 + 0x14,param_1 + iVar3 * 0x40 + 0x10);
      fVar7 = fVar7 / *(float *)(param_2 + 6);
    }
    *(undefined1 *)(param_1 + iVar3 * 0x40 + 0x2f) = 1;
    param_1[iVar3 * 0x40 + 0x2d] = (int)fVar7;
    param_1[iVar3 * 0x40 + 0x2e] = 0;
    *(char *)((int)param_1 + iVar3 * 0x100 + 0xbd) = (char)*(undefined4 *)(param_2 + 8);
    param_1[iVar3 * 0x40 + 0x28] = (int)(param_1 + iVar3 * 0x40 + 0x10);
    param_1[iVar3 * 0x40 + 0x29] = (int)(param_1 + iVar3 * 0x40 + 0x14);
    if (*(char *)((int)param_1 + iVar3 * 0x100 + 0x10f) == '\0') {
      param_1[iVar3 * 0x40 + 0x2a] = 0;
    }
    else {
      param_1[iVar3 * 0x40 + 0x2a] = (int)(param_1 + iVar3 * 0x40 + 0x18);
    }
    break;
  case 0x19d:
    iVar3 = *(int *)(param_2 + 4);
    if (*(float *)(param_2 + 6) <= 0.0) {
      fVar7 = (float)param_1[iVar3 * 0x40 + 0x1d] - (float)param_1[iVar3 * 0x40 + 0x1c];
    }
    else {
      fVar7 = ((float)param_1[iVar3 * 0x40 + 0x1d] - (float)param_1[iVar3 * 0x40 + 0x1c]) /
              *(float *)(param_2 + 6);
    }
    *(undefined1 *)(param_1 + iVar3 * 0x40 + 0x37) = 1;
    param_1[iVar3 * 0x40 + 0x35] = (int)fVar7;
    param_1[iVar3 * 0x40 + 0x36] = 0;
    *(char *)((int)param_1 + iVar3 * 0x100 + 0xdd) = (char)*(undefined4 *)(param_2 + 8);
    param_1[iVar3 * 0x40 + 0x33] = (int)(param_1 + iVar3 * 0x40 + 0x1c);
    param_1[iVar3 * 0x40 + 0x34] = (int)(param_1 + iVar3 * 0x40 + 0x1d);
    break;
  case 0x19e:
    iVar3 = *(int *)(param_2 + 4);
    if (*(float *)(param_2 + 6) <= 0.0) {
      fVar7 = (float)param_1[iVar3 * 0x40 + 0x1f] - (float)param_1[iVar3 * 0x40 + 0x1e];
    }
    else {
      fVar7 = ((float)param_1[iVar3 * 0x40 + 0x1f] - (float)param_1[iVar3 * 0x40 + 0x1e]) /
              *(float *)(param_2 + 6);
    }
    *(undefined1 *)(param_1 + iVar3 * 0x40 + 0x3f) = 1;
    param_1[iVar3 * 0x40 + 0x3d] = (int)fVar7;
    param_1[iVar3 * 0x40 + 0x3e] = 0;
    *(char *)((int)param_1 + iVar3 * 0x100 + 0xfd) = (char)*(undefined4 *)(param_2 + 8);
    param_1[iVar3 * 0x40 + 0x3b] = (int)(param_1 + iVar3 * 0x40 + 0x1e);
    param_1[iVar3 * 0x40 + 0x3c] = (int)(param_1 + iVar3 * 0x40 + 0x1f);
    break;
  case 0x19f:
    *(char *)(param_1 + 0x105) = (char)*(undefined4 *)(param_2 + 4);
    break;
  case 0x1a0:
    param_1[*(int *)(param_2 + 4) * 0x40 + 0x40] =
         *(int *)(*param_1 + *(int *)(param_2 + 6) * 4 + 0xd7c);
    break;
  case 0x1a1:
    param_1[*(int *)(param_2 + 4) * 0x40 + 0x41] =
         *(int *)(*param_1 + *(int *)(param_2 + 6) * 4 + 0xd7c);
    break;
  case 0x1a2:
    FUN_089a383c(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),0,param_1 + *(int *)(param_2 + 4) * 0x40 + 0xc);
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10e) = 1;
    break;
  case 0x1a3:
    FUN_089a383c(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                 *(undefined4 *)(param_2 + 10),0,param_1 + *(int *)(param_2 + 4) * 0x40 + 0x18);
    *(undefined1 *)((int)param_1 + *(int *)(param_2 + 4) * 0x100 + 0x10f) = 1;
  }
  return;
}

