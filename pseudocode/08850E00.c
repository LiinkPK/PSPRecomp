/* Entry 0x08850E00 | file offset 0x0004DDD8 | FUN_08850e00 | bytes 292 */

void FUN_08850e00(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x60e) != '\0') {
    if (*(char *)(param_1 + 0x60f) == '\0') {
      FUN_08833b80(param_1,(int)*(short *)(param_1 + 0x5f4),(int)*(short *)(param_1 + 0x5f6));
    }
    else {
      FUN_08833b80(param_1,0xffffffff,(int)*(short *)(param_1 + 0x5f6));
    }
    FUN_0882fd08(param_1 + 0x130,0,1);
    *(undefined2 *)(param_1 + 0x5f4) = 0xffff;
    *(undefined2 *)(param_1 + 0x5f6) = 0xffff;
    *(undefined1 *)(param_1 + 0x60e) = 0;
  }
  sVar1 = *(short *)(param_1 + 0x608);
  iVar2 = 0;
  if (0 < sVar1) {
    uVar4 = *(uint *)(param_1 + 0x44c);
    uVar3 = *(uint *)(param_1 + 0x448);
    iVar5 = param_1;
    do {
      if (-1 < *(short *)(iVar5 + 0x5f8)) {
        uVar6 = FUN_089985b0(1,0,(int)*(short *)(iVar5 + 0x5f8));
        uVar4 = uVar4 | (uint)((ulonglong)uVar6 >> 0x20);
        uVar3 = uVar3 | (uint)uVar6;
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 2;
    } while (iVar2 < sVar1);
    *(uint *)(param_1 + 0x44c) = uVar4;
    *(uint *)(param_1 + 0x448) = uVar3;
  }
  *(undefined2 *)(param_1 + 0x608) = 0;
  return;
}

