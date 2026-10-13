/* Entry 0x088F98E0 | file offset 0x000F68B8 | FUN_088f98e0 | bytes 148 */

void FUN_088f98e0(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_088fb3c0();
  iVar3 = 0;
  puVar2 = &DAT_09afb8a0;
  do {
    uVar1 = FUN_088fb934((int)*(char *)(puVar2 + 0x416),(int)*(char *)((int)puVar2 + 0x1059),0);
    *(undefined2 *)((int)puVar2 + 0xf3a) = uVar1;
    if (-1 < *(char *)((int)puVar2 + 0x105a)) {
      uVar1 = FUN_088fb934((int)*(char *)((int)puVar2 + 0x105a),(int)*(char *)((int)puVar2 + 0x105b)
                           ,1);
      *(undefined2 *)((int)puVar2 + 0xf3e) = uVar1;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x418;
  } while (iVar3 < 2);
  FUN_088fb434(0);
  return;
}

