/* Entry 0x08915438 | file offset 0x00112410 | FUN_08915438 | bytes 672 */

void FUN_08915438(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int local_40 [9];
  
  if (DAT_09af02a8 == 0) {
    DAT_09af02a8 = 1;
    DAT_089d84bc = 0;
    DAT_089d84bd = 0;
    DAT_089d84be = 0;
    DAT_089d84bf = 0;
    DAT_089d84d8 = 0;
    DAT_089d84d9 = 0;
    DAT_089d84da = 0;
    DAT_089d84db = 0;
    DAT_089d84dc = 0;
    DAT_089d84dd = 0;
    DAT_089d84de = 0;
    DAT_089d84df = 0;
    DAT_089d84ec = 0;
    DAT_089d84ed = 0;
    DAT_089d84ee = 0;
    DAT_089d84ef = 0;
    DAT_089d84f4 = 0;
    DAT_089d84f5 = 0;
    DAT_089d84f6 = 0;
    DAT_089d84f7 = 0;
    DAT_089d8500 = 0;
    DAT_089d8501 = 0;
    DAT_089d8502 = 0;
    DAT_089d8503 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x6d0);
  if (*(char *)(iVar3 + 0xbac) != '\0') {
    local_40[0] = 0x804040;
    local_40[1] = 0x408040;
    local_40[2] = 0x408080;
    local_40[3] = 0x404080;
    local_40[4] = 0xffffff;
    iVar1 = FUN_0891705c(0xffffffff);
    if (*(byte *)(iVar1 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(byte *)(iVar1 + 0xc) - 1;
    }
    iVar2 = local_40[iVar2];
    func_0x08ac6088(iVar3 + 0xba0,&DAT_089d84b8,0);
    if (*(char *)(param_1 + 0x7e0) == '\0') {
      local_40[5] = 0x1e;
      local_40[6] = 0x28;
      local_40[7] = 0x3c;
      local_40[8] = 0x50;
      iVar3 = *(byte *)(iVar1 + 0xd) - 1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (3 < iVar3) {
        iVar3 = 3;
      }
      iVar3 = local_40[iVar3 + 5] + (int)((*(float *)(param_1 + 2000) / 30.0) * 255.0);
    }
    else {
      iVar3 = (int)((*(float *)(param_1 + 2000) / 90.0) * 255.0);
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    DAT_089d84d8 = (undefined1)iVar2;
    DAT_089d84d9 = (undefined1)((uint)iVar2 >> 8);
    DAT_089d84da = (undefined1)((uint)iVar2 >> 0x10);
    DAT_089d84db = (undefined1)iVar3;
    fVar4 = *(float *)(param_1 + 2000) - DAT_089d5eac;
    DAT_089d84dc = DAT_089d84d8;
    DAT_089d84dd = DAT_089d84d9;
    DAT_089d84de = DAT_089d84da;
    DAT_089d84df = DAT_089d84db;
    *(float *)(param_1 + 2000) = fVar4;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 2000) = fVar4;
    if (iVar3 < 1) {
      FUN_08916d28(param_1);
      *(undefined1 *)(param_1 + 0x7e0) = 0;
    }
  }
  return;
}

