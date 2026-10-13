/* Entry 0x0881559C | file offset 0x00012574 | FUN_0881559c | bytes 380 */

undefined4 FUN_0881559c(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    puVar2 = (undefined1 *)0x0;
    while (puVar2 = (undefined1 *)FUN_08835134(param_1,0xd,puVar2), puVar2 != (undefined1 *)0x0) {
      FUN_088372d0(param_1,*(undefined2 *)(puVar2 + 6));
      uVar4 = *(uint *)(param_1 + 0x464);
      uVar3 = *(uint *)(param_1 + 0x460);
      uVar5 = FUN_089985b0(1,0,*puVar2);
      *(uint *)(param_1 + 0x464) = uVar4 | (uint)((ulonglong)uVar5 >> 0x20);
      *(uint *)(param_1 + 0x460) = uVar3 | (uint)uVar5;
    }
    puVar2 = (undefined1 *)0x0;
    while (puVar2 = (undefined1 *)FUN_08835134(param_1,1,puVar2), puVar2 != (undefined1 *)0x0) {
      uVar4 = *(uint *)(param_1 + 0x464);
      uVar3 = *(uint *)(param_1 + 0x460);
      uVar5 = FUN_089985b0(1,0,*puVar2);
      *(uint *)(param_1 + 0x464) = uVar4 | (uint)((ulonglong)uVar5 >> 0x20);
      *(uint *)(param_1 + 0x460) = uVar3 | (uint)uVar5;
    }
    FUN_08831994(param_1);
    FUN_08822a88(param_1 + 0x570);
    FUN_088160b4(param_1);
    *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 1;
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
    *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 2;
    *(uint *)(param_1 + 0x560) = *(uint *)(param_1 + 0x560) & 0xffffff0f | 0x30;
    uVar1 = 0;
  }
  return uVar1;
}

