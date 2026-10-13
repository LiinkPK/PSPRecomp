/* Entry 0x088443A0 | file offset 0x00041378 | FUN_088443a0 | bytes 268 */

undefined4 * FUN_088443a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  FUN_088444d4(param_1,param_2);
  iVar4 = 0;
  iVar5 = param_1;
  do {
    if (*(int *)(iVar5 + 0x10) < 0) {
      *(undefined4 *)(iVar5 + 0x10) = param_2;
      cVar1 = *(char *)(DAT_089d4960 + 0x60);
      goto LAB_0884442c;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar4 < 0x10);
  cVar1 = *(char *)(DAT_089d4960 + 0x60);
LAB_0884442c:
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  puVar2 = (undefined4 *)FUN_0885c6cc(*(undefined4 *)(param_1 + 4),0xec,0,0,1,0);
  puVar6 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_08843c1c(puVar2);
    puVar6 = puVar2;
  }
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x54) = param_4;
  uVar3 = FUN_088470b8(param_2);
  *puVar6 = uVar3;
  return puVar6;
}

