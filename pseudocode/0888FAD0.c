/* Entry 0x0888FAD0 | file offset 0x0008CAA8 | FUN_0888fad0 | bytes 356 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888fad0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  bVar1 = true;
  if (param_1[2] != 0) {
    FUN_088da0a8(*param_1,0,auStack_60,auStack_20);
    FUN_0887b778(param_1[2],auStack_60);
    FUN_0887b828(param_1[2],auStack_20);
    FUN_0887b98c(param_1[2]);
    FUN_0887b9c4(param_1[2]);
  }
  iVar3 = 0;
  piVar2 = param_1;
  while ((*piVar2 == 0 || (120.0 <= (float)param_1[0xc]))) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (1 < iVar3) {
LAB_0888fb84:
      if (bVar1) {
        FUN_0888fc34(param_1);
        *(undefined1 *)(_DAT_08b3d6b8 + 0x8bc) = 1;
        if ((float)param_1[0xd] < 0.0) {
          func_0x08a620b0(_DAT_08a62280,4);
          piVar2 = (int *)param_1[0xe];
        }
        else {
          func_0x08a62020(_DAT_08a62280,4);
          piVar2 = (int *)param_1[0xe];
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
          param_1[0xe] = 0;
        }
        param_1[3] = 1;
        fVar4 = (float)param_1[0xc];
      }
      else {
        fVar4 = (float)param_1[0xc];
      }
      param_1[0xc] = (int)(fVar4 + *(float *)(DAT_089d69e0 + 0x18));
      return;
    }
  }
  bVar1 = false;
  goto LAB_0888fb84;
}

